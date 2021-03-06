/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSURLSessionConfiguration;

@interface OspreyServiceClient : NSObject {

	NSURL* _URL;
	NSURLSessionConfiguration* _Conf;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSURLSessionConfiguration * Conf;              //@synthesize Conf=_Conf - In the implementation block
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 configuration:(id)arg2 ;
-(NSURLSessionConfiguration *)Conf;
@end

