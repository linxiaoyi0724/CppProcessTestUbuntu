aux_source_directory(. SRC_LIST)
aux_source_directory(./Chapter9 SRC_LIST1)
add_executable(CppProcessTestUbuntu ${SRC_LIST} Chapter7.cpp ${SRC_LIST1})