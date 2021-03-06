/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CNUIFamilyMemberContactsEditingStrategy : NSObject {

	NSArray* _prohibitedPropertyKeys;
	/*^block*/id _sensitiveDataContactFilter;

}

@property (nonatomic,readonly) NSArray * prohibitedPropertyKeys;              //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
@property (nonatomic,readonly) id sensitiveDataContactFilter;                 //@synthesize sensitiveDataContactFilter=_sensitiveDataContactFilter - In the implementation block
+(id)managedContactsStrategy;
+(id)whitelistedContactsStrategy;
-(id)initWithProhibitedPropertyKeys:(id)arg1 sensitiveDataContactFilter:(/*^block*/id)arg2 ;
-(NSArray *)prohibitedPropertyKeys;
-(id)sensitiveDataContactFilter;
@end

