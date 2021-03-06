/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSManagedObject, RadioModel;


@protocol RadioManagedObjectWrapperProtocol <NSObject>
@property (getter=isDatabaseBacked,nonatomic,readonly) BOOL databaseBacked; 
@property (nonatomic,readonly) NSManagedObject * managedObject; 
@property (nonatomic,readonly) RadioModel * model; 
@required
-(RadioModel *)model;
-(BOOL)isDatabaseBacked;
-(id)initWithModel:(id)arg1 managedObject:(id)arg2;
-(NSManagedObject *)managedObject;

@end

