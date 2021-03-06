/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAssetKeyServiceType.h>

@class NFLazy, NFPromise;

@interface FCAssetKeyService : NSObject <FCAssetKeyServiceType> {

	NFLazy* _session;
	NFLazy* _requestEncoder;
	NFPromise* _endpointURLPromise;

}

@property (nonatomic,readonly) NFLazy * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NFLazy * requestEncoder;                     //@synthesize requestEncoder=_requestEncoder - In the implementation block
@property (nonatomic,readonly) NFPromise * endpointURLPromise;              //@synthesize endpointURLPromise=_endpointURLPromise - In the implementation block
-(NFLazy *)session;
-(NFLazy *)requestEncoder;
-(id)initWithConfigurationManager:(id)arg1 ;
-(void)_performHTTPRequestWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NFPromise *)endpointURLPromise;
-(void)fetchWrappingKeysWithIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

