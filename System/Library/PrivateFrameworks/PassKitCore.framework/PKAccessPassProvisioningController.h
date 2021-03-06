/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKAccessPassProvisioningCoordinator;

@interface PKAccessPassProvisioningController : NSObject {

	PKAccessPassProvisioningCoordinator* _coordinator;

}

@property (assign,nonatomic,__weak) id<PKAccessPassProvisioningControllerDelegate> delegate; 
+(BOOL)canAddAccessPassWithConfiguration:(id)arg1 ;
-(id<PKAccessPassProvisioningControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAccessPassProvisioningControllerDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
@end

