/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStoreFilter, CNContactStore, NSArray, CNAccountsAndGroupsItem;

@interface CNAccountsAndGroupsDataSource : NSObject {

	CNContactStoreFilter* _filter;
	CNContactStoreFilter* _serverFilter;
	BOOL _hidesSearchableSources;
	CNContactStore* _store;
	NSArray* _sections;
	CNAccountsAndGroupsItem* _rootItem;

}

@property (nonatomic,retain) CNContactStore * store;                             //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                 //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsItem * rootItem;                 //@synthesize rootItem=_rootItem - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources;                        //@synthesize hidesSearchableSources=_hidesSearchableSources - In the implementation block
@property (nonatomic,copy) CNContactStoreFilter * filter; 
@property (nonatomic,readonly) CNContactStoreFilter * serverFilter; 
@property (getter=isTrivial,nonatomic,readonly) BOOL trivial; 
-(void)reload;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(CNContactStoreFilter *)filter;
-(BOOL)hidesSearchableSources;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(void)setServerFilterForItem:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(BOOL)isTrivial;
-(CNContactStoreFilter *)serverFilter;
-(void)_applyFilter;
-(void)_reloadSections;
-(void)setStore:(CNContactStore *)arg1 ;
-(CNAccountsAndGroupsItem *)rootItem;
-(void)setRootItem:(CNAccountsAndGroupsItem *)arg1 ;
-(CNContactStore *)store;
@end
