/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned shareMode : 1;
} SCD_Struct_IN1;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_IN2;

typedef struct {
	unsigned backgroundLaunch : 1;
	unsigned confirmed : 1;
} SCD_Struct_IN3;

typedef struct {
	unsigned shareMode : 1;
	unsigned confirm : 1;
	unsigned success : 1;
} SCD_Struct_IN4;

typedef struct {
	unsigned airCirculationMode : 1;
	unsigned climateZone : 1;
	unsigned relativeFanSpeedSetting : 1;
	unsigned relativeTemperatureSetting : 1;
	unsigned enableAirConditioner : 1;
	unsigned enableAutoMode : 1;
	unsigned enableClimateControl : 1;
	unsigned enableFan : 1;
} SCD_Struct_IN5;

typedef struct {
	unsigned field1[8];
} SCD_Struct_IN6;

typedef struct {
	unsigned canceled : 1;
	unsigned canceledByService : 1;
	unsigned completed : 1;
	unsigned missedPickup : 1;
	unsigned outstanding : 1;
} SCD_Struct_IN7;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	unsigned audioRoute : 1;
	unsigned destinationType : 1;
	unsigned preferredCallProvider : 1;
	unsigned ttyType : 1;
} SCD_Struct_IN9;

typedef struct {
	BOOL list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_IN10;

typedef struct {
	double list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_IN11;

typedef struct {
	long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_IN12;
