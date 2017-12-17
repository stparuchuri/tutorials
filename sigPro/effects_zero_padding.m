% --------------------------------------------------
% Goal: to demonstrate the effects of zero padding 
% --------------------------------------------------
% @author: Surya Paruchuri
% @date: 07/24/2017.

clc;
clear all;
close all;

fs = 100; % sample rate
t=0:1/fs:5; % time vector
f=5; % sinewave freq
x=5*sin(2*pi*f*t);

figure();
plot(t,x); hold on; title('Time domain-Original '); 

% zero-padding and it's effects
x1=[x,zeros(1,512-length(x))];
x2 = [zeros(1,ceil((512-length(x))/2)),x,zeros(1,floor((512-length(x))/2))];
if (512==length(x1) && 512== length(x2))
   X1 = abs(fft(x1));
   X2 = abs(fft(x2));
else 
    display(' lengths not equal');
end

f_axis = -fs/2:fs/(length(x1)-1):fs/2;

figure(2);
plot(f_axis,X1); title('FFT of x1');hold on;
figure(3);
plot(f_axis,X2); title('FFT of x2');hold on;

X1_t = [X1(1,1:256),zeros(1,512),X1(1,257:512)];
X2_t = [X2(1,1:256),zeros(1,512),X2(1,257:512)];
x2_t = real(ifft(X2_t));
x1_t = real(ifft(X1_t));

figure(4);
plot(x1_t); title('inverFFT of X1_t')
