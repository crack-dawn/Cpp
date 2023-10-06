
CC = g++

GDB_DEBUG :=1

MAKE := mingw32-make.exe

ifeq ($(GDB_DEBUG), 1)
CXXFLAGS += -g -gdwarf-2
endif

BUILD_DIR = ./BUILD_DIR

TARGET += ${BUILD_DIR}/main

ALL:  ${BUILD_DIR}/libfun3.dll  ${TARGET}.o  ${TARGET}.exe  



INC	 =  ${shell  find ./ -name "*.h"   | grep -v ./lib }
vpath %.h $(sort $(dir $(INC)))

SRC	 =  ${shell  find ./ -name "*.cpp" | grep -v ./lib }
vpath %.cpp $(sort $(dir $(SRC)))

OBJ	 = 	${patsubst %.cpp,$(BUILD_DIR)/%.o,  ${notdir $(SRC) }  } 
vpath %.c $(sort $(dir $(OBJ)))
VPATH +=./BUILD_DIR:./inc:./src 


 
#complie 
${TARGET}.exe: ${OBJ}   	| $(BUILD_DIR)
	${CC}  $(CXXFLAGS) ${BUILD_DIR}/libfun3.dll   $^   -o  ${TARGET}  

$(BUILD_DIR)/%o:%cpp 		| $(BUILD_DIR)
	${CC}  $(CXXFLAGS)   -c -fPIC  	$< -o  $@		

${BUILD_DIR}/libfun3.dll: 	| $(BUILD_DIR)
	cd ./lib  && ${MAKE} 

${BUILD_DIR}:
	${shell if [ ! -e $(BUILD_DIR) ];	 \
			  then mkdir -p $(BUILD_DIR); \
			fi}


 





.PYTHON : clean debug

debug: 
	echo   	${DLL_H} 
	echo 	${DLL_INC}
	echo   	${DLL_LIB}  
	echo 	${LDFLAGS}
	echo   	${SRC}  
	echo   	${OBJ}

clean :
	rm -rf  ${OBJ} ${TARGET}
	rm -rf  ${BUILD_DIR}
	

 




# ${TARGET}.elf 	${TARGET}.bin ${TARGET}.hex


# list of objects
# OBJECTS = $(addprefix $(BUILD_DIR)/,$(notdir $(C_SOURCES:.c=.o)))
# vpath %.c $(sort $(dir $(C_SOURCES)))
# grep -v dir_to_exclude



# DLL_H = ${shell find ./lib -name "*.h" } 
# # DLL_INC = ${patsubst ./%,-I/%,  ${DLL_H}  }    
  
# DLL_LIB =  ${shell  find ./lib -name "*.dll"  }

# # 链接库的路径 -L开头
# LDFLAGS = ${patsubst ./%,-L/%,  ${DLL_LIB}  }    
# #头文件的路径
# DLL_INC=  $(DLL_H:./%=-I/%)   


# ${DLL_LIB}: 
# 	cd ./lib && mingw32-make.exe 











 
# ${BUILD_DIR}:
# 	mkdir $@

# INC_shell    = ${shell  find ./ -name "*.h"}
# INC_wildcard = ${wildcard ./*.h }

# SRC_shell    = ${shell  find ./ -name "*.cpp"}
# SRC_wildcard = ${wildcard ./*.cpp}  # 通配符 匹配目录下所有.cpp文件    ./同级目录   *.cpp 所有cpp后缀文件

# OBJ_patsubst 	= $(patsubst %.cpp, %.o,  ${SRC})
# OBJ_subst 		= $(subst  .cpp , .o,  ${SRC} )   

# #complie 
# ${TARGET}: ${OBJ} 
# 	${CC}   ${OBJ}  -o ${TARGET} #### .o->.out

# ${OBJ_DIR}/${OBJ}: ${SRC}  
# 	${CC}  -c $^  				#### .cpp  -> .o
 