#include <iostream>
#include <dlfcn.h>

using squareFunc = int (*)(int);

int main()
{
    void *loadedLibrary = dlopen("./libsquare.so", RTLD_LAZY);

    if (!loadedLibrary)
    {
        std::cerr << "couldn't load dll\n"
                  << dlerror() << std::endl;
    }

    squareFunc func = reinterpret_cast<squareFunc>(dlsym(loadedLibrary, "square"));

    if (!func)
    {
        std::cerr << "couldn't extract func\n"
                  << dlerror() << std::endl;
    }

    std::cout << "using square function :" << func(4) << std::endl;

    dlclose(loadedLibrary);

    return 0;
}