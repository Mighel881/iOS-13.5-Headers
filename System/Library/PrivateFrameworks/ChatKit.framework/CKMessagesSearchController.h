/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessageTypeSearchController.h>

@interface CKMessagesSearchController : CKMessageTypeSearchController
+(id)sectionTitle;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(Class)cellClass;
+(BOOL)supportsQuicklook;
+(BOOL)supportsMenuInteraction;
-(id)fetchAttributes;
-(unsigned long long)maxResultsForMode:(unsigned long long)arg1 ;
-(id)queryAttributesForText:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(void)searchWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(NSDirectionalEdgeInsets)additionalGroupInsets;
-(id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3 ;
@end
