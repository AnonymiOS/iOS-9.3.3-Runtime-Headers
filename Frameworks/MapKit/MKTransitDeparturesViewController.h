/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/_MKTransitConnectionCellDelegate.h>
#import <libobjc.A.dylib/_MKPlaceTransitIncidentCellDelegate.h>
#import <libobjc.A.dylib/MKTransitDeparturesCellDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@protocol GEOTransitSystem, MKTransitDepaturesViewControllerDelegate;
@class NSMutableDictionary, NSMutableSet, NSMapTable, NSString, NSMutableArray, _MKPlaceTransitIncidentsController, MKMapItem, NSTimer, NSDate;

@interface MKTransitDeparturesViewController : UITableViewController <_MKTransitConnectionCellDelegate, _MKPlaceTransitIncidentCellDelegate, MKTransitDeparturesCellDelegate, GEOResourceManifestTileGroupObserver> {

	NSMutableDictionary* _sectionControllers;
	NSMutableSet* _sequencesShowingMultipleDepartures;
	NSMutableDictionary* _multiDepartureSequenceHeightValues;
	NSMutableSet* _animatingSequences;
	NSMapTable* _cachedSectionHeaders;
	BOOL _fetchingTransitInfo;
	BOOL _lastInfoRefreshFailed;
	NSString* _infoRefreshErrorDescription;
	NSMutableArray* _sections;
	NSMutableDictionary* _cachedImages;
	NSMutableDictionary* _cachedSequencesForSection;
	NSMapTable* _cachedDirectionsForSystem;
	NSMapTable* _cachedSystemHasInactiveLines;
	_MKPlaceTransitIncidentsController* _incidentsController;
	BOOL _anyIncidentAdvisoryShown;
	NSMutableArray* _shownIncidentTitles;
	BOOL _isAttributionURLAvailable;
	BOOL _hasNoDisplayableDepartureInfo;
	BOOL _showDisambiguation;
	BOOL _isFilteredSelection;
	BOOL _allowsTransitLineSelection;
	BOOL _pagingAllowed;
	BOOL _pendingRefresh;
	id<GEOTransitSystem> _filterSystem;
	MKMapItem* _mapItem;
	NSTimer* _cellRefreshTimer;
	NSDate* _departureCutoffDate;
	NSDate* _lastCutoffDateWithValidSchedule;
	id<MKTransitDepaturesViewControllerDelegate> _delegate;
	long long _lastFailureDiagnosis;

}

@property (assign,nonatomic,__weak) id<MKTransitDepaturesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                       //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) BOOL showDisambiguation;                                                   //@synthesize showDisambiguation=_showDisambiguation - In the implementation block
@property (nonatomic,retain) id<GEOTransitSystem> filterSystem;                                         //@synthesize filterSystem=_filterSystem - In the implementation block
@property (nonatomic,readonly) BOOL isFilteredSelection;                                                //@synthesize isFilteredSelection=_isFilteredSelection - In the implementation block
@property (nonatomic,readonly) BOOL allowsTransitLineSelection;                                         //@synthesize allowsTransitLineSelection=_allowsTransitLineSelection - In the implementation block
@property (nonatomic,retain) NSTimer * cellRefreshTimer;                                                //@synthesize cellRefreshTimer=_cellRefreshTimer - In the implementation block
@property (assign,nonatomic) BOOL pagingAllowed;                                                        //@synthesize pagingAllowed=_pagingAllowed - In the implementation block
@property (assign,nonatomic) BOOL pendingRefresh;                                                       //@synthesize pendingRefresh=_pendingRefresh - In the implementation block
@property (nonatomic,retain) NSDate * departureCutoffDate;                                              //@synthesize departureCutoffDate=_departureCutoffDate - In the implementation block
@property (nonatomic,retain) NSDate * lastCutoffDateWithValidSchedule;                                  //@synthesize lastCutoffDateWithValidSchedule=_lastCutoffDateWithValidSchedule - In the implementation block
@property (assign,nonatomic) long long lastFailureDiagnosis;                                            //@synthesize lastFailureDiagnosis=_lastFailureDiagnosis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MKTransitDepaturesViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MKTransitDepaturesViewControllerDelegate>)delegate;
-(double)_heightForFooterInSection:(long long)arg1 ;
-(id)_separatorColor;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id)_blockedIncidentEntities;
-(void)setDepartureCutoffDate:(NSDate *)arg1 ;
-(NSDate *)departureCutoffDate;
-(id)initWithMapItem:(id)arg1 allowTransitLineSelection:(BOOL)arg2 ;
-(void)_refresh;
-(void)_localeDidChange;
-(long long)lastFailureDiagnosis;
-(id)_inactiveLinesControllerForSection:(long long)arg1 ;
-(id)_departureCutoffDateForSequence:(id)arg1 ;
-(BOOL)_isInfoExpired;
-(double)_maxImageWidth;
-(BOOL)_sectionHasFooter:(long long)arg1 ;
-(void)_rebuildSections;
-(long long)_sectionsCount;
-(id)_systemForSection:(long long)arg1 ;
-(void)setCellRefreshTimer:(NSTimer *)arg1 ;
-(void)setLastFailureDiagnosis:(long long)arg1 ;
-(id)_systemForSection:(long long)arg1 firstSection:(long long*)arg2 ;
-(long long)_departureSequenceFrequencyTypeForAllDeparturesSections;
-(void)setFilterSystem:(id<GEOTransitSystem>)arg1 ;
-(id)_controllerForSection:(long long)arg1 ;
-(id)_identifierForSection:(long long)arg1 ;
-(id)_imageKeyForLine:(id)arg1 size:(long long)arg2 ;
-(void)_updateSecondaryTextForHighFrequencyCell:(id)arg1 withSequence:(id)arg2 serviceGapDescription:(id)arg3 ;
-(id)_departureCutoffDateForLine:(id)arg1 ;
-(void)timesTappedInDeparturesCell:(id)arg1 ;
-(BOOL)pendingRefresh;
-(double)_maxImageWidthPassingTest:(/*^block*/id)arg1 ;
-(id)_indexPathWithHeader:(id)arg1 ;
-(void)_openAttributionURL;
-(void)dragDidEndInDeparturesCell:(id)arg1 ;
-(id)_cellForRowAtIndexPath:(id)arg1 ;
-(id)_incidentCellForRow:(long long)arg1 ;
-(id)_incidentsFilteredToOnePerLine:(BOOL)arg1 ;
-(id)initWithMapItem:(id)arg1 allowTransitLineSelection:(BOOL)arg2 filterSystem:(id)arg3 ;
-(void)dragDidBeginInDeparturesCell:(id)arg1 ;
-(void)incidentButtonSelectedInDeparturesCell:(id)arg1 ;
-(BOOL)isFilteredSelection;
-(int)currentTransitCategory;
-(id)_dominantIncidentForSequence:(id)arg1 ;
-(BOOL)_hasAttribution;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(id)_connectionCellForRow:(long long)arg1 ;
-(NSTimer *)cellRefreshTimer;
-(BOOL)_systemHasInactiveLines:(id)arg1 ;
-(BOOL)_systemHasAllInactiveLines:(id)arg1 ;
-(void)_updateDepartureCutoffDate;
-(id)_identifierForSequence:(id)arg1 ;
-(void)_refreshTransitInfo;
-(void)infoButtonSelectedInIncidentCell:(id)arg1 ;
-(id)_imageWithArtworkDataSource:(id)arg1 ;
-(BOOL)allowsTransitLineSelection;
-(void)_refreshCellsWithCutoffUpdate:(BOOL)arg1 ;
-(int)_transitCategoryForSequence:(id)arg1 ;
-(BOOL)_hasConnectionsSection;
-(id<GEOTransitSystem>)filterSystem;
-(BOOL)_systemHasAllInactiveLines:(id)arg1 serviceResumesDescription:(id*)arg2 ;
-(void)setLastCutoffDateWithValidSchedule:(NSDate *)arg1 ;
-(void)_incrementPageControlValueForSection:(long long)arg1 identifier:(id)arg2 ;
-(double)_defaultLeadingSeparatorInset;
-(BOOL)_sectionHasHeader:(long long)arg1 ;
-(id)_inactiveLinesForSystem:(id)arg1 linesWithServiceResumesDataOnly:(BOOL)arg2 ;
-(id)_messageCell;
-(id)_imageForLine:(id)arg1 ;
-(long long)_sectionForIdentifier:(id)arg1 ;
-(BOOL)_isStuckWithExpiredInfo;
-(long long)_sectionTypeForSection:(long long)arg1 ;
-(id)_viewForHeaderInSection:(long long)arg1 ;
-(id)_startEndDatesForSequence:(id)arg1 date:(id)arg2 ;
-(void)_multiSystemRefreshCellsIfNecessary:(id)arg1 ;
-(id)_departuresControllerForSection:(long long)arg1 ;
-(id)_imageForLine:(id)arg1 size:(long long)arg2 ;
-(BOOL)_showInactiveWithDataOnly;
-(void)_configureLeadingForDeparturesCell:(id)arg1 width:(double)arg2 compressed:(BOOL)arg3 ;
-(void)setShowDisambiguation:(BOOL)arg1 ;
-(void)infoButtonSelectedInConnectionCell:(id)arg1 ;
-(double)_heightForRows;
-(BOOL)showDisambiguation;
-(NSDate *)lastCutoffDateWithValidSchedule;
-(BOOL)_hasMessageSection;
-(void)_transitInfoUpdated;
-(void)_updateScheduleInfoIfNeeded;
-(int)transitCategoryForFrequencyType:(long long)arg1 ;
-(BOOL)_updateSecondaryTextForOperatingHours:(id)arg1 withSequence:(id)arg2 ;
-(void)setPagingAllowed:(BOOL)arg1 ;
-(void)_sectionHeaderButtonPressed:(id)arg1 ;
-(void)setPendingRefresh:(BOOL)arg1 ;
-(id)_directionsForSystem:(id)arg1 hasSequencesWithNoDirection:(out BOOL*)arg2 ;
-(id)_departureSequenceForIndexPath:(id)arg1 ;
-(id)_imageForSystem:(id)arg1 ;
-(void)_configureDeparturesCell:(id)arg1 forIndexPath:(id)arg2 ;
-(int)_transitCategoryForSection:(long long)arg1 ;
-(void)recordIncidentShown:(id)arg1 system:(id)arg2 ;
-(id)_departureSequencesForSection:(long long)arg1 ;
-(id)_pagingPromptForSection:(long long)arg1 ;
-(id)_viewForFooterInSection:(long long)arg1 ;
-(BOOL)_isCompressed;
-(BOOL)_shouldPageSection:(long long)arg1 ;
-(BOOL)_isImageCandidateForColumnCentering:(id)arg1 ;
-(double)_columnCenteringImageWidth;
-(long long)_numberOfDeparturesSectionsForSystem:(id)arg1 ;
-(id)_smallerImageWithArtworkDataSource:(id)arg1 ;
-(BOOL)_isCompressedWithTraits:(id)arg1 ;
-(void)_toggleShowingMultipleDeparturesForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_indexPathWithoutHeader:(id)arg1 ;
-(BOOL)_hasIncidentsSection;
-(long long)_departureSequenceFrequencyTypeForSection:(long long)arg1 ;
-(id)_attributionCell;
-(id)_departureSequenceForIndexPath:(id)arg1 outDepartureIndex:(unsigned long long*)arg2 outIsNewLine:(BOOL*)arg3 outNextLineIsSame:(BOOL*)arg4 ;
-(void)_refreshCells;
-(BOOL)pagingAllowed;
-(id)_directionForSection:(long long)arg1 ;
-(long long)_lineImageSize;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
@end

