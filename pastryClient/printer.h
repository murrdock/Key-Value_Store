
#ifndef CUSTOM_PRINTER_H
#define CUSTOM_PRINTER_H

#include <string>
#include "node.h"
class Custom_Printer
{
    public:
    void printToConsole(std::string);
    void printError(std::string);
    void printNode(node_Sptr);
};

#endif
