/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASKImageRequestDelegate.h>

@interface AppStoreKit.ArtworkLoader : _UKNOWN_SUPERCLASS_ <ASKImageRequestDelegate> {

	 resourceLoader;
	 accessQueue;
	 completionHandlers;
	 requestCompletionMap;
	 isOccluded;
	 assetObserver;

}
-(void)imageRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)imageRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)resourceLoaderDidBeginLoading;
-(void)resourceLoaderDidLoadAllForReason:(id)arg1 ;
-(void)resourceLoaderDidIdle;
@end
