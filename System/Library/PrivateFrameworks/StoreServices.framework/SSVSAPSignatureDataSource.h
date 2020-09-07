/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSURLRequest, SSURLRequestProperties, NSHTTPURLResponse, NSString;

@interface SSVSAPSignatureDataSource : NSObject {

	NSData* _bodyData;
	NSURLRequest* _request;
	SSURLRequestProperties* _requestProperties;
	NSHTTPURLResponse* _response;

}

@property (nonatomic,readonly) NSData * HTTPBody; 
@property (nonatomic,readonly) NSString * HTTPMethod; 
-(NSData *)HTTPBody;
-(NSString *)HTTPMethod;
-(id)initWithURLRequest:(id)arg1 ;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(id)initWithURLResponse:(id)arg1 bodyData:(id)arg2 ;
-(id)valueForHTTPHeader:(id)arg1 ;
-(id)valueForQueryParameter:(id)arg1 ;
@end
