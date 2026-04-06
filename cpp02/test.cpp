#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setprecision(17);

// Test case 1
    double floatPos = 0.0;
    int fixedPos = 0;
    const int scale = 1000; // 1000 means 3 decimal places
    const int fixedStep = 100; // 0.1 -> 100

    for (int i = 0; i < 10; i++)
    {
        floatPos += 0.1;
        fixedPos += fixedStep;
    }

    std::cout << "Floating-point:\n";
    std::cout << "floatPos = " << floatPos << "\n";
    std::cout << "(floatPos == 1.0) = " << (floatPos == 1.0) << "\n\n";

    std::cout << "Fixed-point:\n";
    std::cout << "fixedPos raw = " << fixedPos << "\n";
    std::cout << "fixedPos visible = " << (fixedPos / 1000.0) << "\n";
    std::cout << "(fixedPos == 1000) = " << (fixedPos == 1000) << "\n";

// Test case 2
	std::cout << std::endl;
	double a = 0.1;
    double b = 0.2;
    double c = 0.3;

    int fa = 100; // 0.1 with scale 1000
    int fb = 200; // 0.2
    int fc = 300; // 0.3

    std::cout << "Floating-point:\n";
    std::cout << "a + b = " << (a + b) << "\n";
    std::cout << "c     = " << c << "\n";
    std::cout << "((a + b) == c) = " << ((a + b) == c) << "\n\n";

    std::cout << "Fixed-point:\n";
    std::cout << "fa + fb raw = " << (fa + fb) << "\n";
    std::cout << "fc raw      = " << fc << "\n";
    std::cout << "((fa + fb) == fc) = " << ((fa + fb) == fc) << "\n";
    return 0;
}
