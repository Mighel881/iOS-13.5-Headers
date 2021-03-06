/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@interface PIAutoLoopAnalysisRequest : NURenderRequest {

	long long _flavor;

}

@property (assign,nonatomic) long long flavor;              //@synthesize flavor=_flavor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(long long)flavor;
-(void)setFlavor:(long long)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
@end

