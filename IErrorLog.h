#pragma once
#include "Header.h"
class IErrorLog
{
public:
        virtual bool OpenLog(const char* FileName) = 0;
        virtual bool CloseLog() = 0;
        virtual bool WriteError(const char* ErrorMessage) = 0;

        virtual ~IErrorLog()
        {

        }
};