/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FAFamilyMember, NSArray;

@interface CNUICoreFamilyElement : NSObject {

	FAFamilyMember* _familyMember;
	NSArray* _matchingContacts;

}

@property (nonatomic,readonly) FAFamilyMember * familyMember;              //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,readonly) NSArray * matchingContacts;                 //@synthesize matchingContacts=_matchingContacts - In the implementation block
@property (nonatomic,readonly) BOOL hasMatchingContacts; 
@property (nonatomic,readonly) BOOL isParent; 
-(id)description;
-(BOOL)isParent;
-(FAFamilyMember *)familyMember;
-(id)initWithFamilyMember:(id)arg1 matchingContacts:(id)arg2 ;
-(NSArray *)matchingContacts;
-(BOOL)hasMatchingContacts;
-(BOOL)containsFamilyMember:(id)arg1 ;
@end

