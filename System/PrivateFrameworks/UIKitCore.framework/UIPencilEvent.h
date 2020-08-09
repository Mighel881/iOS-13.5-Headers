/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIEvent.h>

@class NSHashTable;

@interface UIPencilEvent : UIEvent {

	NSHashTable* _trackedInteractions;

}

@property (nonatomic,retain) NSHashTable * trackedInteractions;              //@synthesize trackedInteractions=_trackedInteractions - In the implementation block
-(long long)type;
-(id)_init;
-(long long)subtype;
-(NSHashTable *)trackedInteractions;
-(id)collectAllActiveInteractions;
-(void)deregisterAllInteractionsForWindow:(id)arg1 ;
-(void)deregisterInteraction:(id)arg1 ;
-(void)_sendEventToInteractions;
-(void)registerInteraction:(id)arg1 ;
-(void)setTrackedInteractions:(NSHashTable *)arg1 ;
@end
