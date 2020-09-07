/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSPurchaseQueue.h>

@class AMSMockURLOverride;

@interface AMSMockPurchaseQueue : AMSPurchaseQueue {

	AMSMockURLOverride* _mockURLOverride;

}

@property (retain) AMSMockURLOverride * mockURLOverride;              //@synthesize mockURLOverride=_mockURLOverride - In the implementation block
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 mockURLOverride:(id)arg2 ;
-(AMSMockURLOverride *)mockURLOverride;
-(void)setMockURLOverride:(AMSMockURLOverride *)arg1 ;
@end
