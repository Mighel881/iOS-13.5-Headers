/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWIrisStagingNodeIrisRequestDelegate <NSObject>
@required
-(void)stagingNode:(id)arg1 readyToReceiveRequestsWithEarliestAllowedStillImageCaptureHostPTS:(SCD_Struct_BW2)arg2;
-(void)stagingNode:(id)arg1 willEmitIrisRequest:(id)arg2;
-(void)stagingNode:(id)arg1 waitingToEmitFrameWithPTS:(SCD_Struct_BW2)arg2;

@end
