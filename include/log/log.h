#ifndef __LOG_H
#define __LOG_H

#define MAX_BUF         1024

#define LOGGER_INFO        0
#define LOGGER_WARNING     1
#define LOGGER_CRITICAL    2
#define LOGGER_FATAL       3

/**
 * @brief 
 * 
 * @param logType 
 * @param module 
 * @param logMessage 
 * @return int 
 */
int logger(int logType, const char *module, const char *logMessage);

/**
 * @brief 
 * 
 * @param logType 
 * @param module 
 * @param logMessage 
 * @param ... 
 * @return int 
 */
int loggerArgs(int logType, const char *module, const char *logMessage, ...);

#endif
