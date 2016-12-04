/* This file is automatically generated from internal_statements.sql and .dist_sandbox/subversion-1.9.5/subversion/libsvn_subr/token-map.h.
 * Do not edit this file -- edit the source and rerun gen-make.py */

#define STMT_INTERNAL_SAVEPOINT_SVN 0
#define STMT_0_INFO {"STMT_INTERNAL_SAVEPOINT_SVN", NULL}
#define STMT_0 \
  "SAVEPOINT svn " \
  ""

#define STMT_INTERNAL_RELEASE_SAVEPOINT_SVN 1
#define STMT_1_INFO {"STMT_INTERNAL_RELEASE_SAVEPOINT_SVN", NULL}
#define STMT_1 \
  "RELEASE SAVEPOINT svn " \
  ""

#define STMT_INTERNAL_ROLLBACK_TO_SAVEPOINT_SVN 2
#define STMT_2_INFO {"STMT_INTERNAL_ROLLBACK_TO_SAVEPOINT_SVN", NULL}
#define STMT_2 \
  "ROLLBACK TO SAVEPOINT svn " \
  ""

#define STMT_INTERNAL_BEGIN_TRANSACTION 3
#define STMT_3_INFO {"STMT_INTERNAL_BEGIN_TRANSACTION", NULL}
#define STMT_3 \
  "BEGIN TRANSACTION " \
  ""

#define STMT_INTERNAL_BEGIN_IMMEDIATE_TRANSACTION 4
#define STMT_4_INFO {"STMT_INTERNAL_BEGIN_IMMEDIATE_TRANSACTION", NULL}
#define STMT_4 \
  "BEGIN IMMEDIATE TRANSACTION " \
  ""

#define STMT_INTERNAL_COMMIT_TRANSACTION 5
#define STMT_5_INFO {"STMT_INTERNAL_COMMIT_TRANSACTION", NULL}
#define STMT_5 \
  "COMMIT TRANSACTION " \
  ""

#define STMT_INTERNAL_ROLLBACK_TRANSACTION 6
#define STMT_6_INFO {"STMT_INTERNAL_ROLLBACK_TRANSACTION", NULL}
#define STMT_6 \
  "ROLLBACK TRANSACTION " \
  ""

#define STMT_INTERNAL_LAST 7
#define STMT_7_INFO {"STMT_INTERNAL_LAST", NULL}
#define STMT_7 \
  "; " \
  ""

#define INTERNAL_STATEMENTS_SQL_DECLARE_STATEMENTS(varname) \
  static const char * const varname[] = { \
    STMT_0, \
    STMT_1, \
    STMT_2, \
    STMT_3, \
    STMT_4, \
    STMT_5, \
    STMT_6, \
    STMT_7, \
    NULL \
  }

#define INTERNAL_STATEMENTS_SQL_DECLARE_STATEMENT_INFO(varname) \
  static const char * const varname[][2] = { \
    STMT_0_INFO, \
    STMT_1_INFO, \
    STMT_2_INFO, \
    STMT_3_INFO, \
    STMT_4_INFO, \
    STMT_5_INFO, \
    STMT_6_INFO, \
    STMT_7_INFO, \
    {NULL, NULL} \
  }
