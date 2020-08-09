/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileProviderServiceSource.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/QLThumbnailCache.h>

@class LiveFSFPExtensionHelper, QLExternalThumbnailCache, NSString;

@interface LiveFSThumbnailsServiceSource : NSObject <NSFileProviderServiceSource, NSXPCListenerDelegate, QLThumbnailCache> {

	LiveFSFPExtensionHelper* ex;
	QLExternalThumbnailCache* thumbnailCache;

}

@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSString *)serviceName;
-(id)thumbnailCache;
-(id)makeListenerEndpointAndReturnError:(id*)arg1 ;
-(void)storeThumbnailAtURL:(id)arg1 forItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getThumbnailURLForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getThumbnailCacheURLWrappersWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFileProviderExtension:(id)arg1 ;
@end
