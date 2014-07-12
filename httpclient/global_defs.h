/**
 * @file    global_defs.h
 * @brief   类和名词空间相关的宏定义
 * @author  xiangwangfeng <xiangwangfeng@gmail.com>
 * @data	2011-4-23
 * @website www.xiangwangfeng.com
 */

#pragma once

#define NAMESPACE_BEGIN(x)	namespace x{
#define NAMESPACE_END(x)	}

#ifdef HTTP_CLIENT_EXPORT
#define HTTP_API		__declspec(dllexport)
#define HTTP_DATA		__declspec(dllexport)
#define HTTP_CLASS	    __declspec(dllexport)
#else
#define HTTP_API		__declspec(dllimport)
#define HTTP_DATA		__declspec(dllimport)
#define HTTP_CLASS	    __declspec(dllimport)
#endif

#define DECLARE_NON_COPYABLE(className) \
	className (const className&);\
	className& operator= (const className&);
