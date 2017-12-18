% --------------------------------------------------------
% Goal: The following code aims to demonstrate the effects
% of clipping of a signal in the frequency domain
% Result: Clipping a signal reults in harmonics of the signal.
% --------------------------------------------------------
% @author: Surya Paruchuri
% @date: October 24 2017.

clc;
clear all;
close all;

% ------------ Time domain Signal Generation -------------
fc=5; % the tone frequency ;
fs=100; % sampling frequency;
t=0:1/fs:30-1/fs; % time frame of the signal;
x_original = 5* sin(2*pi*fc*t); %original signal
figure(1);
subplot(2,1,1);
plot(t,x_original); title('original time domain signal'); hold on;
xlabel('time');ylabel('amplitude');
clip_voltage = 3;
x_clipped = (-3<=x_original).*(x_original<=3).*x_original + (x_original>3)*3 + (x_original)*(-3); % clipped signal
subplot(2,1,2);
plot(t,x_clipped); title ('clipped time domain signal');
xlabel('time');ylabel('amplitude');

%% ------- Fourier Transform -------- 

fft_x_original = fftshift(abs(fft(x_original, length(t))));
f_scale = -fs/2:fs/(length(t)-1):fs/2;
figure(2);
subplot(2,1,1);
plot(f_scale, fft_x_original); title('FFT of original signal'); hold on;
xlabel('frequency');ylabel('amplitude');
fft_x_clipped = fftshift(abs(fft(x_clipped,length(t))));
subplot(2,1,2);
plot(f_scale,fft_x_clipped); title('FFT of clipped signal');
xlabel('frequency');ylabel('amplitude');
