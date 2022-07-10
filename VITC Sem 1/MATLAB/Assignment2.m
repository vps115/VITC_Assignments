clc
clear all
syms x  real 
f=(x^3)/3-(7*x^2)/2+10*x+4
fx= diff(f);
c = solve(fx);
cmin = min(double(c));
cmax = max(double(c));
figure(1)
ezplot(f,[cmin-2,cmax+2]);
hold on
fxx= diff(fx,x)  
for i = 1:1:size(c)
    T1 = subs(fxx, x ,c(i) );
    T3= subs(f, x, c(i));
 if (double(T1)==0)
    sprintf('The test fails at x=%d' ,double (c(i)))    
    else            
         if (double(T1) < 0)      
    sprintf('The maximum point x is %d', double(c(i)))
    sprintf('The value of the function is %d', double (T3)) 
         else
    sprintf('The minimum point x is %d', double(c(i)))
                sprintf('The value of the function is %d', double (T3))
         end
 end
 plot(double(c(i)), double(T3), 'r*', 'markersize', 15);
end
% plotting inflection points for testing concavity
% de=polynomialDegree(fxx);
de=2;
if(de==0)
    sprintf('the given polynomial is second degree or less')
else
d = solve(fxx) % finding inflection points
for i = 1:size(d)
    T2 = subs(f, x ,d(i) );
    R1=sign(subs(fxx,x,d(i)+0.0001));
    L1=sign(subs(fxx,x,d(i)-0.0001));
    check=abs(L1-R1)
    if (check==2)
    sprintf('The point x=%d is a point of inflection',double (d(i)))
 else 
   sprintf('The point x=%d is not a point of inflection',double (d(i)))
 end
plot(double(d(i)), double(T2), 'g*', 'markersize', 15);
end
end 

%Plotting first derivative of f and critical points 
figure(2)
ezplot(fx,[cmin-2,cmax+2])
title('Plotting first derivative of f and critical points')
hold on
for i = 1:1:size(c)
T4 = subs(fx, x ,c(i) );
plot(double(c(i)), double(T4), 'ro', 'markersize', 15);
end

%Plotting second derivative of f and inflection points
figure(3)
ezplot(fxx,[cmin-2,cmax+2])
hold on
hold on
for i = 1:1:size(d)
T4 = subs(fxx, x ,d(i) );
plot(double(d(i)), double(T4), 'r*', 'markersize', 15);
end
title('Plotting second derivative of f and inflection points ')
