/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSData;

@interface ML3StoreItemPlaylistData : NSObject {

	NSArray* _lookupItems;
	NSData* _playlistData;
	NSArray* _parsedPlaylistsImportProperties;

}

@property (nonatomic,readonly) NSData * playlistsData; 
@property (nonatomic,readonly) NSArray * parsedStorePlaylistsImportProperties; 
@property (nonatomic,readonly) unsigned long long playlistCount; 
-(NSData *)playlistsData;
-(id)initWithLookupItems:(id)arg1 ;
-(NSArray *)parsedStorePlaylistsImportProperties;
-(id)_playlistPropertiesForLookupItems:(id)arg1 ;
-(id)_playlistPropertiesFromPlaylistData:(id)arg1 ;
-(id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg1 ;
-(id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg1 cropStyle:(id)arg2 ;
-(id)initWithPlaylistsData:(id)arg1 ;
-(unsigned long long)playlistCount;
@end
