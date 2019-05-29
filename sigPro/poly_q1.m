clc;
clear all;
close all;
%% 
% -------------------------------------------------------------------------
% Author: Surya Teja Paruchuri
% Date: May 29 2019
% Description: 
%               In this script we examine the spectral characteristics 
%               of individual arm of a polyphase decomposition.
%
% Explantion:   Assume we have a signal x[n] samples at fs;
%               When we decompose it into polyphase channels,
%               each decomposed arm's signal is equivalent to the original
%               signal sampled at the 1/(# of arms)*fs sampling rate.
%               The difference between samples across arms is that samples
%               from ARM-1 are out of phase by 1 samples period wrt.
%               samples from ARM-2 or 2 samples wrt ARM-3 and so on...,
%               As long as the 1/(# of arms)*fs rate is sufficient to hold
%               the complete spectral content, the arms -individually should
%               have same spectral content per magnitude, but phase
%               spectrum would differ by the equivalnet of the # of sample
%               periods when comparing against each other.
% -------------------------------------------------------------------------

%%
% Configuration Parameters
fs = 30e3;
f1 = 200;
f2 = 500;
t = 1:1/fs:10-1/fs;
fft_N = 2048;
P = 37679;
Q = 50000;
freq_scale = -fs/2:fs/(fft_N-1):fs/2;
freq_scale_new = -fs*P/(2*Q):fs*P/((fft_N-1)*Q):fs*P/(2*Q);
windowSize = 1000;
poly_Arms = 4;
colors = ['r','b','g','k','y'];

% GCM Freq Location - AOA=0; MS Direciton = 35; Velocity: 1281; fc=2600;
% MS Angle Spread = 90;
GCM_freq = [
            2646.496554
            2398.072972
            2856.235713
            2076.741862
            3012.736828
            1661.778086
            3085.595585
            1134.553968
            3028.367772
            474.3048087
            2770.251475
            -331.9205617
            2197.995558
            -1284.757542
            1139.862919
            -2305.722183
            -628.8542845
            -3054.842078
            -2880.934258
            -2026.754738];
        
%% Input
x_2Tones = sin(2*pi*f1*t) + sin(2*pi*f2*t);

gcm_x = zeros(1,length(t));
for i=1:20
    gcm_x = gcm_x + sin(2*pi*GCM_freq(i)*t);
end

x = gcm_x;

figure();
fft_x = fftshift(abs(fft(x,fft_N)));
plot(freq_scale, 10*log(fft_x)); grid on;
xlabel('freq'); ylabel('amplitude'); title('original Spectrum');

%% Poly Phase decomposition
if (mod(length(x),poly_Arms) ~= 0)
    display('cannot decompose to requested arms');
else
   x_reshaped = reshape(x,poly_Arms, length(x)/poly_Arms);     
end

fft_arms = [];
%% Uncomment to use correct sampling frequency;
freq_scale_arm = -fs/(2*poly_Arms): fs/(poly_Arms * (fft_N-1)) : fs/(2 * poly_Arms);  

%% Uncomment to use INCORRECT ssampling frequency;
% freq_scale_arm = -fs/(2): fs/((fft_N-1)) : fs/(2);

%% Individual Arm Spectral plots.
figure();
for i = 1: 1: poly_Arms
    fft_arms = [ fft_arms; fftshift(abs(fft(x_reshaped(i,:),fft_N)))];
    plot(freq_scale_arm,10*log(fft_arms(i,:)),colors(mod(i,5)));grid on; hold on;
    xlabel('freq'); ylabel('amplitude'); title('polyphase decomposition spectrum Arm');
end