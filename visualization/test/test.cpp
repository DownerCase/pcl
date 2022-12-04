#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/io/pcd_io.h>

using Point = pcl::PointXYZRGB;

int 
  main (int argc, char **argv)
{
  srand (time (0));

  pcl::visualization::PCLVisualizer p ("test");
  p.setBackgroundColor (1, 1, 1);

  p.addCoordinateSystem (0.1);
  
  // Demonstrate usage of spinOnce()
  p.resetStoppedFlag();
  while (!p.wasStopped())
  {
    static int counter = 0;
    std::cout << "spinOnce was called "<<++counter<<" times.\n";
    p.spinOnce(1000);  // Give the GUI 1000ms to handle events, then return
  }

  //p.removePointCloud ("cloud");
  //p.spin ();
}
