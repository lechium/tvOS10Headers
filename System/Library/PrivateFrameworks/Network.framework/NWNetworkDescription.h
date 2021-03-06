/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Network/Network-Structs.h>
@class NSSet, NSURL, NSString;

@interface NWNetworkDescription : NSObject {

	NSSet* _interfaceTypeOptions;
	NSSet* _ssidOptions;
	NSSet* _dnsSearchDomainOptions;
	NSSet* _dnsServerAddressOptions;
	long long _roamingPreference;
	NSURL* _probeURL;
	long long _state;

}

@property (assign) long long state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * privateDescription; 
@property (copy) NSSet * interfaceTypeOptions;                             //@synthesize interfaceTypeOptions=_interfaceTypeOptions - In the implementation block
@property (copy) NSSet * ssidOptions;                                      //@synthesize ssidOptions=_ssidOptions - In the implementation block
@property (copy) NSSet * dnsSearchDomainOptions;                           //@synthesize dnsSearchDomainOptions=_dnsSearchDomainOptions - In the implementation block
@property (copy) NSSet * dnsServerAddressOptions;                          //@synthesize dnsServerAddressOptions=_dnsServerAddressOptions - In the implementation block
@property (assign) long long roamingPreference;                            //@synthesize roamingPreference=_roamingPreference - In the implementation block
@property (copy) NSURL * probeURL;                                         //@synthesize probeURL=_probeURL - In the implementation block
+(long long)getNewStateFromPathMatch:(BOOL)arg1 oldState:(long long)arg2 probeExists:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)privateDescription;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(BOOL)matchesPath:(id)arg1 ;
-(void)updateStateWithPath:(id)arg1 ;
-(NSSet *)interfaceTypeOptions;
-(void)setInterfaceTypeOptions:(NSSet *)arg1 ;
-(NSSet *)ssidOptions;
-(void)setSsidOptions:(NSSet *)arg1 ;
-(NSSet *)dnsSearchDomainOptions;
-(void)setDnsSearchDomainOptions:(NSSet *)arg1 ;
-(NSSet *)dnsServerAddressOptions;
-(void)setDnsServerAddressOptions:(NSSet *)arg1 ;
-(long long)roamingPreference;
-(void)setRoamingPreference:(long long)arg1 ;
-(NSURL *)probeURL;
-(void)setProbeURL:(NSURL *)arg1 ;
@end

