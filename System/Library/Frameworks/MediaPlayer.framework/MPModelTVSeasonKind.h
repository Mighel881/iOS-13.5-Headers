/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class MPModelTVEpisodeKind;

@interface MPModelTVSeasonKind : MPModelKind {

	MPModelTVEpisodeKind* _episodeKind;

}

@property (nonatomic,readonly) MPModelTVEpisodeKind * episodeKind;              //@synthesize episodeKind=_episodeKind - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithEpisodeKind:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)humanDescription;
-(MPModelTVEpisodeKind *)episodeKind;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
@end
