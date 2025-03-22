#pragma once
#include <string>
#include <vector>

struct Pixel {
	unsigned char r, g, b;
};

class RDAImage {
public:
	RDAImage(int width, int height) : width(width), height(height) {
		pixels.resize(width * height);
	}

	Pixel& operator()(int x, int y) {
		return pixels[y * width + x];
	}

	const Pixel& operator()(int x, int y) const {
		return pixels[y * width + x];
	}

	int getWidth() const { return width; }
	int getHeight() const { return height; }

private:
	int width, height;
	std::vector<Pixel> pixels;
};

class TrackMateDataFormImpl;

class TrackMateDataForm
{
public:
	TrackMateDataForm();
	~TrackMateDataForm();
	std::string LoadTrackMateFiles(std::string TrackMateFile); // Load a TrackMate Files.
	std::string LoadTrackMateFiles(std::string TrackMateFile, std::string QCFile); // Load a TrackMate Files.

	void RotateCellColumn(int i); // Rotate root for i times (When drawing movies, the order of cell columns are reflected the rotation).

	// KymoPlot
	void NucleiPlot(std::string outputdirectory, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max);
	void NucleiPlot_ColorTrack(std::string outputdirectory, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max);
	void NucleiPlot_ColorDivision(std::string outputdirectory, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max);
	void NucleiPlot_MeanDistance(std::string outputdirectory, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max);
	void NucleiPlot_MeanDistance(std::string outputdirectory, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max, double distance_min, double distance_max);
	void NucleiPlot_MeanDistance_TZEZ(std::string outputdirectory, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max);
	void NucleiPlot_GrowthRate(std::string outputdirectory, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max);
	void NucleiPlot_GrowthRate(std::string outputdirectory, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max, double growthrate_min, double growthrate_max);
	void NucleiPlot_REGR(std::string outputdirectory, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max);
	void NucleiPlot_REGR(std::string outputdirectory, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max, double REGR_min, double REGR_max);

	//KymoPlot - Preview
	void NucleiPlot_Preview(std::vector<int>* output_cellfile, std::vector<RDAImage>* output_img, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max);
	void NucleiPlot_ColorTrack_Preview(std::vector<int>* output_cellfile, std::vector<RDAImage>* output_img, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max);
	void NucleiPlot_ColorDivision_Preview(std::vector<int>* output_cellfile, std::vector<RDAImage>* output_img, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max);
	void NucleiPlot_MeanDistance_Preview(std::vector<int>* output_cellfile, std::vector<RDAImage>* output_mat, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max, double distance_min, double distance_max);
	void NucleiPlot_GrowthRate_Preview(std::vector<int>* output_cellfile, std::vector<RDAImage>* output_mat, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max, double growthrate_min, double growthrate_max);
	void NucleiPlot_REGR_Preview(std::vector<int>* output_cellfile, std::vector<RDAImage>* output_mat, int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int time_tickmain_interval,
		int time_ticksub_interval, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, int x_min, int ymin, int x_max, int y_max, double REGR_min, double REGR_max);

	
	// Generate movie of Rotary.
	void PlotNuclei_RotaryAll(std::string outputdirectory,
		int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, double length_min, double length_max, unsigned int divmarker, unsigned int lag,
		int fps);
	void PlotNuclei_RotaryAll_CellLength(std::string outputdirectory,
		int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, double length_min, double length_max, unsigned int divmarker,
		int fps);
	void PlotNuclei_RotaryAll_CellLength(std::string outputdirectory,
		int x_outer, int y_outer, int border_thickness, int tick_thickness, int tick_length, int position_tickmain_interval, int position_ticksub_interval,
		int x_inner, int y_inner, double length_min, double length_max, unsigned int divmarker,
		double distance_min, double distance_max, int fps);

	// Generate Growth Analysis
	void LengthThreshold(std::string outputdirectory, double celllength);
	void GrowthThreshold_sec(std::string outputdirectory, double growthrate);
	void GrowthThreshold_min(std::string outputdirectory, double growthrate);
	void GrowthThreshold_hr(std::string outputdirectory, double growthrate);
	void DivMotherCell(std::string outputdirectory);
	void Length_RelLastDiv(std::string outputdirectory);
	void NucleiDistanceDistribution(std::string outputdirectory);
	void GrowthRateDistribution(std::string outputdirectory);
	void NucleiDistanceThresholdDistribution(std::string outputdirectory);
	void GrowthRateThresholdDistribution(std::string outputdirectory);
	void Division_Timelag(std::string outputdirectory, double distance_threshold);
	void Division_Timelag(std::string outputdirectory, int OrderFromMDCC, double distance_threshold);
	void CellCycle(std::string outputdirectory);
	void CellCycle(std::string outputdirectory, int OrderFromMDCC);

	// TZ/EZboundary
	void Output_CellFile(std::string outputdirectory);
	void TZEZBoundary_wThreshold(std::string outputdirectory);

	//For GUI
	void CellFileColor(std::vector<int>* column);

private:
	TrackMateDataFormImpl* pimpl;



};
