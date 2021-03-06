/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreDAVAccountInfoProvider;
@class NSArray;

@interface CoreDAVRequestLogger : NSObject {

	id<CoreDAVAccountInfoProvider> _provider;
	NSArray* _headerSortDescriptors;
	int _snippetsLogged;

}

@property (nonatomic,retain) NSArray * headerSortDescriptors;              //@synthesize headerSortDescriptors=_headerSortDescriptors - In the implementation block
-(id)initWithProvider:(id)arg1 ;
-(void)logCoreDAVRequest:(id)arg1 withTaskIdentifier:(id)arg2 ;
-(void)finishCoreDAVResponse;
-(void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2 isBody:(BOOL)arg3 ;
-(void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2 ;
-(void)logCoreDAVResponseHeaders:(id)arg1 andStatusCode:(long long)arg2 withTaskIdentifier:(id)arg3 ;
-(void)setHeaderSortDescriptors:(NSArray *)arg1 ;
-(id)_inflateRequestBody:(id)arg1 ;
-(NSArray *)headerSortDescriptors;
-(void)logCoreDAVResponseSnippet:(id)arg1 ;
@end

