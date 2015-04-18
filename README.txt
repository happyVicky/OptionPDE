C++ Explicit Eulere Finite Difference Method (FDM) For Black Scholes
Finite Difference Methods are extremely common in fields such as fluid dynamics where they are used to provide numerical solutions to PDE, which often possess no analytical equivalence. Finite Difference Methods are relevant to us since the Black Scholes equation, which represents the price of an option as a function of underlyng asset spot price, is a PDE (Black Scholes PDE). It is a type of second order PDE (convection diffusion equation).
 
CLASSES:

-Payoff: This class represents the pay-off functionality of an option. It is also a functor.

-VanillaOption: This is a simple class that encapsulates the option parameters. We are using it as well as PayOff as we will want to extend the FDM solver to allow more exotic options in the future.

-ConvectionDiffusionPDE: This is an abstract base class designed to provide an interface to all subsequent derived classes. It consists of pure virtual functions representing the various coefficients of the PDE as well as boundary and initial conditions.

-BlackScholesPDE: This inherits from ConvectionDiffusionPDE and provides concrete implementations of the coefficients and boundary/initial conditions specific to the Black-Scholes equation.

-FDMBase: This is another abstract base class that provides discretisation parameters and result storage for the Finite Difference scheme. It possesses a pointer to a ConvectionDiffusionPDE.

-FDMEulerExplicit: This inherits from FDMBase and provides concrete methods for the Finite Difference scheme methods for the particular case of the Explicit Euler Method, which we described above.











