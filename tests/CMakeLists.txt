if(BUILD_TESTING)
  add_executable(test_libintl test_libintl.c)
  target_link_libraries(test_libintl PRIVATE intl)
  add_test(NAME test_libintl COMMAND test_libintl)

  if(WIN32 AND BUILD_SHARED_LIBS)
    set_tests_properties(test_libintl PROPERTIES ENVIRONMENT "PATH=$<TARGET_FILE_DIR:intl>;$ENV{PATH}")
  endif()
endif()
