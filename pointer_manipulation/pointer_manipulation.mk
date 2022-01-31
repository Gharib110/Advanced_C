##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=pointer_manipulation
ConfigurationName      :=Release
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/Alireza/ClionProjects/Advanced_C
ProjectPath            :=D:/Alireza/ClionProjects/Advanced_C/pointer_manipulation
IntermediateDirectory  :=../build-$(ConfigurationName)/pointer_manipulation
OutDir                 :=../build-$(ConfigurationName)/pointer_manipulation
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Asus
Date                   :=31/01/2022
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=D:/CodeBlocks/MinGW/bin/g++.exe
SharedObjectLinkerName :=D:/CodeBlocks/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=D:/CodeBlocks/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := D:/CodeBlocks/MinGW/bin/ar.exe rcu
CXX      := D:/CodeBlocks/MinGW/bin/g++.exe
CC       := D:/CodeBlocks/MinGW/bin/gcc.exe
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := D:/CodeBlocks/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=D:\CodeLite
Objects0=../build-$(ConfigurationName)/pointer_manipulation/main.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/pointer_manipulation/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\pointer_manipulation" mkdir "..\build-$(ConfigurationName)\pointer_manipulation"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\pointer_manipulation" mkdir "..\build-$(ConfigurationName)\pointer_manipulation"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/pointer_manipulation/.d:
	@if not exist "..\build-$(ConfigurationName)\pointer_manipulation" mkdir "..\build-$(ConfigurationName)\pointer_manipulation"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/pointer_manipulation/main.c$(ObjectSuffix): main.c ../build-$(ConfigurationName)/pointer_manipulation/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "D:/Alireza/ClionProjects/Advanced_C/pointer_manipulation/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/pointer_manipulation/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/pointer_manipulation/main.c$(ObjectSuffix) -MF../build-$(ConfigurationName)/pointer_manipulation/main.c$(DependSuffix) -MM main.c

../build-$(ConfigurationName)/pointer_manipulation/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/pointer_manipulation/main.c$(PreprocessSuffix) main.c


-include ../build-$(ConfigurationName)/pointer_manipulation//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


