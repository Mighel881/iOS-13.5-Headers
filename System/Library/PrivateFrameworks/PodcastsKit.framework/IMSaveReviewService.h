/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/IMBaseStoreService.h>

@class NSData, NSURL;

@interface IMSaveReviewService : IMBaseStoreService {

	NSData* _bodyData;
	NSURL* _endpointURL;

}

@property (nonatomic,retain) NSData * bodyData;                //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,retain) NSURL * endpointURL;              //@synthesize endpointURL=_endpointURL - In the implementation block
-(NSURL *)endpointURL;
-(NSData *)bodyData;
-(void)setBodyData:(NSData *)arg1 ;
-(id)urlRequest;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(void)performDataRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)generatedEndpointURLForBaseURL:(id)arg1 ;
-(id)initWithEndpointURL:(id)arg1 bodyData:(id)arg2 ;
@end
