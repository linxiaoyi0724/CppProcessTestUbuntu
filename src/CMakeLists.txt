aux_source_directory(. SRC_LIST)
aux_source_directory(./Chapter10 SRC_LIST2)
add_executable(CppProcessTestUbuntu ${SRC_LIST} ${SRC_LIST2})