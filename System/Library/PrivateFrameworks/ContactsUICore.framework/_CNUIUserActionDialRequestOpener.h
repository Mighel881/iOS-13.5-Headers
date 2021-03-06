/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIUserActionDialRequestOpener.h>

@class TUCallCenter, NSString;

@interface _CNUIUserActionDialRequestOpener : NSObject <CNUIUserActionDialRequestOpener> {

	TUCallCenter* _callCenter;

}

@property (nonatomic,readonly) TUCallCenter * callCenter;              //@synthesize callCenter=_callCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorForUnableToCastDialRequest:(id)arg1 ;
+(id)errorForUnableToOpenDialRequest:(id)arg1 withUnderlyingError:(id)arg2 ;
-(id)init;
-(TUCallCenter *)callCenter;
-(id)initWithCallCenter:(id)arg1 ;
-(id)openDialRequest:(id)arg1 withScheduler:(id)arg2 ;
@end

