%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
clear all;
close all;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
UMBRAL_DESCARGA = 2;
TIEMPO_SIMULACION = 7;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

t=0:0.1:TIEMPO_SIMULACION;
f = [];

for i=0:0.1:TIEMPO_SIMULACION;
	if(i < UMBRAL_DESCARGA)
		f=[ f 1 ];	
	else
		f=[ f exp(-(i - UMBRAL_DESCARGA)) ];	
	end
end

df =  -diff(f);

subplot(2,1,1),plot(t,f,'b'),axis([0 TIEMPO_SIMULACION 0 1.2]),grid minor;
subplot(2,1,2),plot(t(1:length(t)-1),df,'r'),grid minor;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%