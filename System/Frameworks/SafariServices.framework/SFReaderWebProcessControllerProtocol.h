/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFReaderWebProcessControllerProtocol <NSObject>
@required
-(void)setConfiguration:(id)arg1;
-(void)setReaderIsActive:(BOOL)arg1;
-(void)prepareToTransitionToReader;
-(void)didCreateReaderPageContextHandle:(id)arg1;
-(void)loadNewReaderArticle;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3;
-(void)setInitalArticleScrollPositionAsDictionary:(id)arg1;
-(void)collectReadingListItemInfoWithBookmarkID:(id)arg1;
-(void)collectReaderContentForMail;
-(void)activateFont:(id)arg1;
-(void)prepareReaderContentForPrinting;
-(void)didFinishPresentationUpdateAfterTransitioningToReader;
-(void)checkReaderAvailability;
-(void)collectArticleContent;

@end

