/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject {

	AVAssetResourceLoadingDataRequestInternal* _dataRequest;

}

@property (nonatomic,readonly) long long requestedOffset; 
@property (nonatomic,readonly) long long requestedLength; 
@property (nonatomic,readonly) BOOL requestsAllDataToEndOfResource; 
@property (nonatomic,readonly) long long currentOffset; 
-(id)init;
-(void)dealloc;
-(id)description;
-(long long)currentOffset;
-(void)respondWithData:(id)arg1 ;
-(long long)requestedOffset;
-(BOOL)requestsAllDataToEndOfResource;
-(long long)requestedLength;
-(CFDictionaryRef)_requestInfo;
-(id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 requestsAllDataToEndOfResource:(BOOL)arg4 canSupplyIncrementalDataImmediately:(BOOL)arg5 ;
-(id)_loadingRequest;
@end
