//Copyright Enguerran COBERT Alias Opaax Dev, All Right Reserved 
#pragma once

DECLARE_LOG_CATEGORY_CLASS(LogProjetTuto, Log, All);

/*
* Current Class where this is called
*/
#define CURRENT_CLASS (FString(__FUNCTION__).Left(FString(__FUNCTION__).Find(TEXT(":"))))

/*
*  Current Function Name where this is called
*/
#define CURRENT_FUNC (FString(__FUNCTION__).Right(FString(__FUNCTION__).Len() - FString(__FUNCTION__).Find(TEXT("::")) - 2))

/*
* Current Line Number in the code where this is called
* Could be weird as this state especially on 'if/else' check, if you use it on else it will outlog the line on else not in the scope
*/
#define CURRENT_LINE  (TEXT("Line") + FString::FromInt(__LINE__))

//--------------------------------- LOG DEFAULT ---------------------------------//
#define PT_ERROR(Format,...) UE_LOG(LogProjetTuto,Error,Format,__VA_ARGS__)
#define PT_WARNING(Format,...) UE_LOG(LogProjetTuto,Warning,Format,__VA_ARGS__)
#define PT_LOG(Format,...) UE_LOG(LogProjetTuto,Log,Format,__VA_ARGS__)
#define PT_VERBOSE(Format,...) UE_LOG(LogProjetTuto,Verbose,Format,__VA_ARGS__)
#define PT_DISPLAY(Format,...) UE_LOG(LogProjetTuto,Display,Format,__VA_ARGS__)

//--------------------------------- LOG ---------------------------------//
#define PT_ERROR_CAT(Category, Format,...) UE_LOG(Category,Error,Format,__VA_ARGS__)
#define PT_WARNING_CAT(Category,Format,...) UE_LOG(Category,Warning,Format,__VA_ARGS__)
#define PT_LOG_CAT(Category,Format,...) UE_LOG(Category,Log,Format,__VA_ARGS__)
#define PT_VERBOSE_CAT(Category,Format,...) UE_LOG(Category,Verbose,Format,__VA_ARGS__)
#define PT_DISPLAY_CAT(Category,Format,...) UE_LOG(Category,Display,Format,__VA_ARGS__)

//--------------------------------- LOG SCREEN ---------------------------------//
#define PT_LOG_SCREEN(Key, DisplayTime, Color, Format, ...) if(GEngine){\
GEngine->AddOnScreenDebugMessage(Key, DisplayTime, Color, FString::Printf(Format, __VA_ARGS__));\
}

#define PT_LOG_SCREEN_SIMPLE(Format, ...) PT_LOG_SCREEN(-1, 10.0f, FColor::Red, Format, __VA_ARGS__)
