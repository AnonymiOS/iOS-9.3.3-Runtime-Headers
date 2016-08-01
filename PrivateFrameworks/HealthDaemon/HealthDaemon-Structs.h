/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned date : 1;
	unsigned type : 1;
} SCD_Struct_HD1;

typedef struct HDSQLiteRow* HDSQLiteRowRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> *> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::hash<sqlite3_stmt *> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::hash<sqlite3_stmt *> >;

typedef struct _compressed_pair<float, std::__1::equal_to<sqlite3_stmt *> > {
	float __first_;
} compressed_pair<float, std::__1::equal_to<sqlite3_stmt *> >;

typedef struct _hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> {
	__hash_node<sqlite3_stmt *, void *> __next_;
} hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *>, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> > > {
	hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *>, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<sqlite3_stmt *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> *> > > {
	__hash_node<sqlite3_stmt *, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<sqlite3_stmt *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<sqlite3_stmt *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> *> > > {
	compressed_pair<std::__1::__hash_node<sqlite3_stmt *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<sqlite3_stmt *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> *> > >;

typedef struct _hash_table<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *> > {
	unique_ptr<std::__1::__hash_node<sqlite3_stmt *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *>, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::hash<sqlite3_stmt *> > __p2_;
	compressed_pair<float, std::__1::equal_to<sqlite3_stmt *> > __p3_;
} hash_table<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *> >;

typedef struct unordered_set<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *> > {
	hash_table<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *> > __table_;
} unordered_set<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *> >;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct {
	unsigned code : 1;
} SCD_Struct_HD16;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > >;

typedef struct _tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > > {
	__tree_node<std::__1::__value_type<long long, double>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> > __pair3_;
} tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > >;

typedef struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > {
	tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > > __tree_;
} map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >;

typedef struct {
	double field1;
	double field2;
	long long field3;
	long long field4;
	double field5;
} SCD_Struct_HD22;

typedef struct {
	unsigned confidence : 1;
	unsigned nextEntryTime : 1;
	unsigned modeOfTransportation : 1;
	unsigned sourceType : 1;
} SCD_Struct_HD23;

typedef struct {
	double avg;
	double max;
	double min;
	unsigned long long count;
} SCD_Struct_HD24;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> > >;

typedef struct _tree<std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDDiscreteStats> > > {
	__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true> > __pair3_;
} tree<std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDDiscreteStats> > >;

typedef struct map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats> > > {
	tree<std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDDiscreteStats> > > __tree_;
} map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats> > >;

typedef struct {
	unsigned dateValue : 1;
	unsigned numberDoubleValue : 1;
	unsigned numberIntValue : 1;
} SCD_Struct_HD29;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct _compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > {
	HDActivityCacheStatisticsBuilderSample __first_;
} compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> >;

typedef struct vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > {
	HDActivityCacheStatisticsBuilderSample __begin_;
	HDActivityCacheStatisticsBuilderSample __end_;
	compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > __end_cap_;
} vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> >;

typedef struct _compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > {
	HDActivityCacheActiveSource __first_;
} compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> >;

typedef struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> > {
	HDActivityCacheActiveSource __begin_;
	HDActivityCacheActiveSource __end_;
	compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > __end_cap_;
} vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >;

typedef struct {
	unsigned confidence : 1;
	unsigned latitude : 1;
	unsigned longitude : 1;
	unsigned uncertainty : 1;
	unsigned locationOfInterestType : 1;
} SCD_Struct_HD36;

typedef struct {
	unsigned duration : 1;
	unsigned goal : 1;
	unsigned goalType : 1;
	unsigned totalBasalEnergyBurnedInCanonicalUnit : 1;
	unsigned totalDistanceInCanonicalUnit : 1;
	unsigned totalEnergyBurnedInCanonicalUnit : 1;
	unsigned type : 1;
} SCD_Struct_HD37;

typedef struct {
	long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_HD38;

typedef struct {
	unsigned activeEnergyBurnedAnchor : 1;
	unsigned activeHours : 1;
	unsigned activeHoursAnchor : 1;
	unsigned briskMinutes : 1;
	unsigned briskMinutesAnchor : 1;
	unsigned cacheIndex : 1;
	unsigned calorieGoalAnchor : 1;
	unsigned energyBurned : 1;
	unsigned energyBurnedGoal : 1;
	unsigned energyBurnedGoalAnchor : 1;
	unsigned energyBurnedGoalDate : 1;
	unsigned stepCount : 1;
	unsigned stepCountAnchor : 1;
	unsigned walkingAndRunningDistance : 1;
	unsigned walkingAndRunningDistanceAnchor : 1;
	unsigned workoutAnchor : 1;
} SCD_Struct_HD39;

typedef struct _compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> > {
	HDActivityCacheStatisticsBuilderStandHourSample __first_;
} compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> >;

typedef struct vector<HDActivityCacheStatisticsBuilderStandHourSample, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> > {
	HDActivityCacheStatisticsBuilderStandHourSample __begin_;
	HDActivityCacheStatisticsBuilderStandHourSample __end_;
	compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> > __end_cap_;
} vector<HDActivityCacheStatisticsBuilderStandHourSample, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > >, std::__1::less<_HKDataTypeCode>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > >, std::__1::less<_HKDataTypeCode>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > >, void *> > >;

typedef struct _tree<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > >, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > >, std::__1::less<_HKDataTypeCode>, true>, std::__1::allocator<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > > > > {
	__tree_node<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > >, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > >, std::__1::less<_HKDataTypeCode>, true> > __pair3_;
} tree<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > >, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > >, std::__1::less<_HKDataTypeCode>, true>, std::__1::allocator<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > > > >;

typedef struct map<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > >, std::__1::less<_HKDataTypeCode>, std::__1::allocator<std::__1::pair<const _HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > > > > {
	tree<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > >, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > >, std::__1::less<_HKDataTypeCode>, true>, std::__1::allocator<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > > > > __tree_;
} map<_HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > >, std::__1::less<_HKDataTypeCode>, std::__1::allocator<std::__1::pair<const _HKDataTypeCode, std::__1::map<long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > > > > > > >;
