/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, MGFileWatcher, MCProfileConnection, CADisplay;

typedef struct __CFNumber* CFNumberRef;

typedef struct __CFData* CFDataRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct timespec {
	long long tv_sec;
	long long tv_nsec;
} timespec;

typedef struct _NSZone* NSZoneRef;

typedef union {
	NSMutableArray* _darwinTokens;
	__SCPreferences _scPrefs;
	MGFileWatcher* _fileWatcher;
	MCProfileConnection* _mcConnection;
	CADisplay* _mainDisplay;
	void _swBehaviorHandle;
	__CTServerConnection _ctCenter;
	__SCDynamicStore _scdynaStore;
} SCD_Union_MG6;
