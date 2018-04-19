
m_1 = 2;
m_2 = 10;
l = .8;
J = (1/3) * m_2 *l^2;
g=9.81;

rate = 0.05;

alpha = (m_2^2 * l^2)/( (m_1 + m_2)*(m_2*l^2 + 4*J) );
beta = 2*m_2 * l /(( m_1 + m_2 ) * (m_2*l^2 + 4*J) );
gamma = m_2*l/(2*(m_1 + m_2));
omega = 2*m_2*l*g/(m_2*l^2 + 4*J);
phi = 1/(m_1+m_2);


A = [0 -(alpha*g/(1-alpha)) 0; 
    0 0 1; 
    0 omega/(1-alpha) 0];

B = [phi/(1-alpha); 
    0; 
    -(beta/(1-alpha))];

C = [0, 1, 0];

D = [0];

p = [-2,-1,-5];

sys_c = ss(A,B,C,D);
sys_d = c2d(sys_c, rate, 'tustin');

K_c = place(A, B, p);
K_d = place(sys_d.A, sys_d.B, p);

[num_c, den_c] = ss2tf(A, B, C, D);
[num_d, den_d] = ss2tf(sys_d.A, sys_d.B, sys_d.C, sys_d.D);

%robotics.ros.createSimulinkBus(gcs)
