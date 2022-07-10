clc
clear
syms r phi theta
sol = int(int(int(r^2*sin(phi),r,1,2),phi,pi/2,pi),theta,0,2*pi)
viewSolid(r,1+0*phi*theta,2,phi,pi/2+0*theta,pi,theta,0,2*pi);
axis equal; grid on;