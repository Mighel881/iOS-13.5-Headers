/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetsdServiceContext.h>

@class NSString, NSError, NSXPCConnection, PLPhotoLibraryBundle, PLAssetsdConnectionAuthorization;

@interface PLDefaultAssetsdServiceContext : NSObject <PLAssetsdServiceContext> {

	SEL _selector;
	NSXPCConnection* _connection;
	PLPhotoLibraryBundle* _libraryBundle;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	NSError* _replyWarning;

}

@property (nonatomic,copy) NSError * replyWarning;                                         //@synthesize replyWarning=_replyWarning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isClientAuthorizedForTCCServicePhotos; 
@property (nonatomic,readonly) BOOL isClientAuthorizedForTCCServicePhotosAdd; 
@property (nonatomic,copy,readonly) NSString * clientDebugDescription; 
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)libraryServicesManager;
-(NSString *)clientDebugDescription;
-(BOOL)isClientAuthorizedForTCCServicePhotos;
-(BOOL)isClientAuthorizedForTCCServicePhotosAdd;
-(void)awaitLibraryState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSError *)replyWarning;
-(void)setReplyWarning:(NSError *)arg1 ;
-(id)initWithSelector:(SEL)arg1 connection:(id)arg2 libraryBundle:(id)arg3 connectionAuthorization:(id)arg4 ;
@end
