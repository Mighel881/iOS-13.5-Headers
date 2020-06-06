/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLPhotoLibraryBundle.h>
#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet, PLBackgroundJobService, NSString;

@interface PLServerPhotoLibraryBundle : PLPhotoLibraryBundle <NSFilePresenter> {

	Class _libraryServicesDelegateClass;
	PLBackgroundJobService* _backgroundJobService;
	NSOperationQueue* _presentedItemOperationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
-(void)close;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1 ;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(BOOL)shouldRelinquishToWriterOfSubitemAtURL:(id)arg1 ;
-(BOOL)bindAssetsdService:(id)arg1 error:(id*)arg2 ;
-(void)shutdownWithReason:(id)arg1 ;
-(id)initWithLibraryURL:(id)arg1 bundleController:(id)arg2 backgroundJobService:(id)arg3 libraryServicesDelegateClass:(Class)arg4 ;
-(id)newAssetsdClient;
-(id)newChangePublisher;
-(id)newLibraryServicesManager;
-(id)newBoundAssetsdServicesTable;
-(id)boundAssetsdServices;
-(void)unbindAssetsdService:(id)arg1 ;
-(void)invalidateClientConnectionsWithReason:(id)arg1 ;
-(void)clearShutdownReason;
@end
