/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeperClient/StoreBookkeeperClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SBCPlaybackPositionDomain : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsSyncProtocol;
	NSString* _domainIdentifier;
	NSString* _ubiquitousDatabasePath;
	NSString* _foreignDatabasePath;

}

@property (nonatomic,retain) NSString * ubiquitousDatabasePath;              //@synthesize ubiquitousDatabasePath=_ubiquitousDatabasePath - In the implementation block
@property (assign,nonatomic) BOOL supportsSyncProtocol;                      //@synthesize supportsSyncProtocol=_supportsSyncProtocol - In the implementation block
@property (nonatomic,readonly) NSString * domainIdentifier;                  //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * foreignDatabasePath;               //@synthesize foreignDatabasePath=_foreignDatabasePath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)domainForSyncingMusicLibraryWithLibraryPath:(id)arg1 ;
+(id)allSyncingDomains;
+(id)domainForExtrasValues;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domainIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsSyncProtocol;
-(id)initWithDomainIdentifier:(id)arg1 foreignDatabasePath:(id)arg2 ;
-(void)setSupportsSyncProtocol:(BOOL)arg1 ;
-(void)setUbiquitousDatabasePath:(NSString *)arg1 ;
-(NSString *)ubiquitousDatabasePath;
-(NSString *)foreignDatabasePath;
@end
