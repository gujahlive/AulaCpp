void PrintString(char *strString)
{
    // Only print if strString is non-null
    if (strString)
        std::cout << strString;
    else
        std::cerr << "PrintString received a null parameter";
}