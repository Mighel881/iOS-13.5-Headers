/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBCoverArticleWidgetView : PBCodable <NSCopying> {

	int _coverArticleWidgetArticleCount;
	NSData* _coverArticleWidgetViewingSessionId;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasCoverArticleWidgetViewingSessionId; 
@property (nonatomic,retain) NSData * coverArticleWidgetViewingSessionId;               //@synthesize coverArticleWidgetViewingSessionId=_coverArticleWidgetViewingSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasCoverArticleWidgetArticleCount; 
@property (assign,nonatomic) int coverArticleWidgetArticleCount;                        //@synthesize coverArticleWidgetArticleCount=_coverArticleWidgetArticleCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCoverArticleWidgetViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasCoverArticleWidgetViewingSessionId;
-(void)setCoverArticleWidgetArticleCount:(int)arg1 ;
-(void)setHasCoverArticleWidgetArticleCount:(BOOL)arg1 ;
-(BOOL)hasCoverArticleWidgetArticleCount;
-(NSData *)coverArticleWidgetViewingSessionId;
-(int)coverArticleWidgetArticleCount;
@end

